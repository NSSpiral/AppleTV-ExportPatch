/* Runtime dump - VCBitrateRule
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCBitrateRule : NSObject
{
    unsigned int _bitrate;
    int _connectionType;
    VCVideoRule * limitingRule;
}

@property unsigned int bitrate;
@property int connectionType;
@property (readonly, nonatomic) VCVideoRule * limitingRule;

- (void)dealloc;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (int)connectionType;
- (unsigned int)bitrate;
- (void)setBitrate:(unsigned int)arg0;
- (VCVideoRule *)limitingRule;
- (VCBitrateRule *)initWithBitrate:(unsigned int)arg0 connectionType:(int)arg1 limitingRule:(VCVideoRule *)arg2;
- (void)setConnectionType:(int)arg0;

@end
