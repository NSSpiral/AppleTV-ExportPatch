/* Runtime dump - VideoConferenceDefaults
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VideoConferenceDefaults : NSObject
{
    int _forceCaptureWidth;
    int _forceCaptureHeight;
    int _forceEncodeWidth;
    int _forceEncodeHeight;
    int _forceFramerate;
    int _forceBitrate;
    int _forceVideoPayload;
    int _forceRecvVideoPayload;
}

@property (readonly) char forceHWI;
@property (readonly) int forceCaptureWidth;
@property (readonly) int forceCaptureHeight;
@property (readonly) int forceEncodeWidth;
@property (readonly) int forceEncodeHeight;
@property (readonly) int forceFramerate;
@property (readonly) int forceBitrate;
@property (readonly) int forceVideoPayload;
@property (readonly) int forceRecvVideoPayload;
@property (readonly) char enableBitstreamCapture;
@property (readonly) char enable2vuyCapture;
@property (readonly) char enableVPBLogging;
@property (readonly) char enableTxSourceYuvDump;
@property (readonly) char enableTxBitstreamDump;
@property (readonly) char enableRecvBitstreamDump;
@property (readonly) char disableVAD;
@property (readonly) int bundleAudio;
@property (readonly) int max2GRate;
@property (readonly) char forceIPv6;

+ (VideoConferenceDefaults *)VideoConferenceDefaultsSingleton;

- (VideoConferenceDefaults *)retain;
- (void)release;
- (VideoConferenceDefaults *)init;
- (VideoConferenceDefaults *)autorelease;
- (unsigned int)retainCount;
- (NSObject *)allocWithZone:(struct _NSZone *)arg0;
- (VideoConferenceDefaults *)copyWithZone:(struct _NSZone *)arg0;
- (char)forceIPv6;
- (char)forceHWI;
- (int)forceVideoPayload;
- (int)forceRecvVideoPayload;
- (int)forceBitrate;
- (int)forceCaptureWidth;
- (int)forceCaptureHeight;
- (int)forceFramerate;
- (int)forceEncodeWidth;
- (int)forceEncodeHeight;
- (int)max2GRate;
- (char)disableVAD;
- (char)enableBitstreamCapture;
- (char)enable2vuyCapture;
- (char)enableVPBLogging;
- (char)enableRecvBitstreamDump;
- (char)enableTxSourceYuvDump;
- (char)enableTxBitstreamDump;
- (int)bundleAudio;

@end
