//
//  VexoAnalytics.h
//  VexoAnalytics
//
//  Created by Federico Nicoli on 5/5/24.
//  Copyright © 2024 Vexo Inc. All rights reserved.

#import <Foundation/Foundation.h>

@interface VexoAnalytics : NSObject

+ (void)configureWithApiKey:(NSString*_Nonnull)apikey deviceId:(NSString*_Nonnull)deviceId config:(NSDictionary*_Nonnull)config;
+ (void)startRecording:(NSString*_Nonnull)sessionId;
+ (void)stopRecording;
+ (NSString*_Nullable)blurImage:(NSString*_Nonnull)imageBase64
                         radius:(nonnull NSNumber*)radius
                          error:(NSError*_Nonnull*_Nonnull)errorPtr;

@end
