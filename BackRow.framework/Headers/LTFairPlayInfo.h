/* Runtime dump - LTFairPlayInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface LTFairPlayInfo : NSObject
{
    id _sessionToken;
    NSString * _keyBagPath;
}

+ (NSString *)infoWithToken:(NSString *)arg0 keyBagPath:(NSString *)arg1;

- (LTFairPlayInfo *)initWithToken:(NSString *)arg0 keyBagPath:(NSString *)arg1;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)keyBagPath;
- (NSString *)sessionToken;

@end
