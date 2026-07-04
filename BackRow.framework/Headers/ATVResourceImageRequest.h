/* Runtime dump - ATVResourceImageRequest
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVResourceImageRequest : NSObject
{
    NSString * _name;
    NSString * _ext;
    NSBundle * _bundle;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * ext;
@property (retain, nonatomic) NSBundle * bundle;

- (NSString *)ext;
- (ATVResourceImageRequest *)initWithResource:(<ATVReadWriteFeedResource> *)arg0 ofType:(NSString *)arg1 inBundle:(NSObject *)arg2;
- (void)setExt:(NSString *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSBundle *)bundle;
- (void)setBundle:(NSBundle *)arg0;
- (void).cxx_destruct;

@end
