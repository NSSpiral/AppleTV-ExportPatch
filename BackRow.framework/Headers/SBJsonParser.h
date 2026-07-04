/* Runtime dump - SBJsonParser
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface SBJsonParser : NSObject
{
    NSString * error;
    unsigned int depth;
    unsigned int maxDepth;
}

@property unsigned int maxDepth;
@property (copy) NSString * error;

- (NSString *)objectWithString:(NSString *)arg0;
- (void)setMaxDepth:(unsigned int)arg0;
- (NSData *)objectWithData:(NSData *)arg0;
- (NSString *)objectWithString:(NSString *)arg0 error:(id *)arg1;
- (SBJsonParser *)init;
- (void).cxx_destruct;
- (NSString *)error;
- (void)setError:(NSString *)arg0;
- (unsigned int)maxDepth;

@end
