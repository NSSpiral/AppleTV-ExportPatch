/* Runtime dump - BWBracketSettings
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWBracketSettings : NSObject
{
    char _providePreBracketedEV0;
    NSArray * _exposureValues;
    NSDictionary * _bracketedCaptureOverrides;
    NSArray * _manualExposureBracketedCaptureParams;
    NSDictionary * _oisBracketedCaptureParams;
}

@property (nonatomic) char providePreBracketedEV0;
@property (copy, nonatomic) NSArray * exposureValues;
@property (copy, nonatomic) NSDictionary * bracketedCaptureOverrides;
@property (copy, nonatomic) NSArray * manualExposureBracketedCaptureParams;
@property (copy, nonatomic) NSDictionary * oisBracketedCaptureParams;

+ (BWBracketSettings *)bracketSettings;

- (void)dealloc;
- (char)providePreBracketedEV0;
- (void)setProvidePreBracketedEV0:(char)arg0;
- (NSArray *)exposureValues;
- (void)setExposureValues:(NSArray *)arg0;
- (NSDictionary *)bracketedCaptureOverrides;
- (void)setBracketedCaptureOverrides:(NSDictionary *)arg0;
- (NSArray *)manualExposureBracketedCaptureParams;
- (void)setManualExposureBracketedCaptureParams:(NSArray *)arg0;
- (NSDictionary *)oisBracketedCaptureParams;
- (void)setOisBracketedCaptureParams:(NSDictionary *)arg0;

@end
