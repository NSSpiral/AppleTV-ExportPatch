/* Runtime dump - LBItem
 * Image: /System/Library/PrivateFrameworks/Librarian.framework/Librarian
 */

@interface LBItem : NSObject
{
    NSURL * _url;
    NSString * _path;
    NSMutableDictionary * _attributes;
    id _replacement;
}

@property (nonatomic) id replacement;

- (NSArray *)attributeNames;
- (NSArray *)attributesForNames:(id)arg0;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (void)dealloc;
- (NSURL *)url;
- (NSString *)path;
- (LBItem *)initWithURL:(NSString *)arg0;
- (UITextReplacement *)replacement;
- (void)setReplacement:(UITextReplacement *)arg0;
- (LBItem *)initWithURL:(NSString *)arg0 itemUpdateInfo:(NSDictionary *)arg1;
- (void)updateInfo:(NSDictionary *)arg0;
- (NSString *)attributeForName:(NSString *)arg0;
- (NSDictionary *)_attributes;

@end
