/* Runtime dump - VCVideoRule
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCVideoRule : NSObject
{
    int iWidth;
    int iHeight;
    float fRate;
    float fPref;
    int iPayload;
}

@property int iWidth;
@property int iHeight;
@property float fRate;
@property float fPref;
@property int iPayload;

- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (VCVideoRule *)initWithFrameWidth:(int)arg0 frameHeight:(int)arg1 frameRate:(float)arg2 payload:(int)arg3;
- (int)iWidth;
- (int)iHeight;
- (float)fRate;
- (float)fPref;
- (int)iPayload;
- (void)setIWidth:(int)arg0;
- (void)setIHeight:(int)arg0;
- (void)setFRate:(float)arg0;
- (VCVideoRule *)initWithFrameWidth:(int)arg0 frameHeight:(int)arg1 frameRate:(float)arg2;
- (void)setToVideoRule:(NSObject *)arg0;
- (void)setFPref:(float)arg0;
- (void)setIPayload:(int)arg0;
- (VCVideoRule *)initWithFrameWidth:(int)arg0 frameHeight:(int)arg1 frameRate:(float)arg2 pref:(float)arg3;
- (int)compareByPref:(id)arg0;

@end
