/* Runtime dump - SBJsonWriter
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface SBJsonWriter : NSObject
{
    NSString * error;
    unsigned int maxDepth;
    char sortKeys;
    char humanReadable;
}

@property unsigned int maxDepth;
@property (copy) NSString * error;
@property char humanReadable;
@property char sortKeys;

- (NSObject *)stringWithObject:(NSObject *)arg0;
- (void)setMaxDepth:(unsigned int)arg0;
- (char)humanReadable;
- (void)setHumanReadable:(char)arg0;
- (char)sortKeys;
- (void)setSortKeys:(char)arg0;
- (NSObject *)dataWithObject:(NSObject *)arg0;
- (NSObject *)stringWithObject:(NSObject *)arg0 error:(id *)arg1;
- (SBJsonWriter *)init;
- (void).cxx_destruct;
- (NSString *)error;
- (void)setError:(NSString *)arg0;
- (unsigned int)maxDepth;

@end
