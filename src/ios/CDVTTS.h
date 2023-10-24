/*
	Cordova Text-to-Speech Plugin
	https://github.com/vilic/cordova-plugin-tts

	by VILIC VANE
	https://github.com/vilic

	MIT License
 */

#import <Cordova/CDV.h>
#import <AVFoundation/AVFoundation.h>

@interface CDVTTS : CDVPlugin <AVSpeechSynthesizerDelegate> {
    AVSpeechSynthesizer* synthesizer;
    NSString* lastCallbackId;
    NSString* callbackId;
}

- (void)setSpeaker:(CDVInvokedUrlCommand*)command;
- (void)setEarpiece:(CDVInvokedUrlCommand*)command;
- (void)speak:(CDVInvokedUrlCommand*)command;
- (void)stop:(CDVInvokedUrlCommand*)command;
- (void)checkLanguage:(CDVInvokedUrlCommand*)command;
- (void)getVoices:(CDVInvokedUrlCommand*)command;
@end
