/* Runtime dump - WLKDictionaryResponseProcessor
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKDictionaryResponseProcessor : NSObject
{
    NSString * _dictionaryKeyPath;
    Class _objectClass;
}

@property (copy, nonatomic) NSString * dictionaryKeyPath;
@property (retain, nonatomic) Class objectClass;

- (NSData *)processResponseData:(NSData *)arg0 error:(id *)arg1;
- (NSString *)dictionaryKeyPath;
- (void)setDictionaryKeyPath:(NSString *)arg0;
- (void)setObjectClass:(Class)arg0;
- (void).cxx_destruct;
- (Class)objectClass;

@end
