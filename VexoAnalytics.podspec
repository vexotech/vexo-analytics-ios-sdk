Pod::Spec.new do |s|
  s.name                = 'VexoAnalytics'
  s.version             = '1.0.0'
  s.summary             = "VexoAnalytics iOS SDK"
  s.description         = "<<-DESC This is not meant to use as a standalone SDK DESC"
  s.homepage            = "https://vexo.co/"
  s.license             = {
    'type' => 'Copyright',
    'text' => 'Copyright (c) 2024, Vexo Inc. All rights reserved.'
  }
  s.author              = { 'VexoTech' => 'admin@vexo.co' }
  s.social_media_url    = "https://x.com/Vexo_Tech"

  s.platform            = :ios, 12.4
  s.vendored_frameworks = 'VexoAnalytics.xcframework'
  s.static_framework    = true
  s.frameworks          = 'UIKit', 'CoreImage', 'AVFoundation', 'QuartzCore'
end