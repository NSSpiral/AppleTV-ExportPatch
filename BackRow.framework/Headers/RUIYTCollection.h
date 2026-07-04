/* Runtime dump - RUIYTCollection
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface RUIYTCollection : NSObject
{
    NSString * _url;
    NSString * _title;
    NSMutableDictionary * _metadataStore;
}

@property (retain) NSMutableDictionary * metadataStore;

- (void)setMetadataStore:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)metadataStore;
- (RUIYTCollection *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)url;
- (NSString *)title;
- (void)setURL:(NSURL *)arg0;
- (void).cxx_destruct;
- (void)setMetadata:(NSData *)arg0 forKey:(NSString *)arg1;
- (NSString *)metadataForKey:(NSString *)arg0;

@end
