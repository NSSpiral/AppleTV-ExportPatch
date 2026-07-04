/* Runtime dump - ISJSONDataProvider
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISJSONDataProvider : ISDataProvider
{
    unsigned int _options;
}

@property unsigned int parserOptions;

- (char)parseData:(NSData *)arg0 returningError:(id *)arg1;
- (unsigned int)parserOptions;
- (void)setParserOptions:(unsigned int)arg0;

@end
