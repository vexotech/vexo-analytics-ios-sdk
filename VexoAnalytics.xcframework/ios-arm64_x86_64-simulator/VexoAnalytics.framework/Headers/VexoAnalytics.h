//
//  VexoAnalytics.h
//  RNVexoAnalytics
//
//  Created by Federico Nicoli on 5/5/24.
//

#import <Foundation/Foundation.h>

@interface VexoAnalytics : NSObject

+ (void)configureWithApiKey:(NSString*_Nonnull)apikey deviceId:(NSString*_Nonnull)deviceId;
+ (void)startRecording:(NSString*_Nonnull)sessionId;
+ (void)stopRecording:(NSString*_Nonnull)sessionId completion:(void (^_Nullable)(NSError* _Nullable error))completion;
+ (NSString*_Nullable)blurImage:(NSString*_Nonnull)imageBase64
                         radius:(nonnull NSNumber*)radius
                          error:(NSError*_Nonnull*_Nonnull)errorPtr;

@end
