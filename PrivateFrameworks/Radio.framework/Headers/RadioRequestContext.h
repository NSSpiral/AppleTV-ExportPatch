/* Runtime dump - RadioRequestContext
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRequestContext : NSObject <NSCopying>
{
    SSVFairPlaySAPSession * _SAPSession;
    char _usesLocalNetworking;
}

@property (retain, nonatomic) SSVFairPlaySAPSession * SAPSession;
@property (nonatomic) char usesLocalNetworking;

- (RadioRequestContext *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setSAPSession:(NSObject *)arg0;
- (char)usesLocalNetworking;
- (void)setUsesLocalNetworking:(char)arg0;
- (SSVFairPlaySAPSession *)SAPSession;

@end
