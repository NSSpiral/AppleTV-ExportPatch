/* Runtime dump - SBJsonStreamParserState
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface SBJsonStreamParserState : NSObject

+ (SBJsonStreamParserState *)sharedInstance;

- (int)parserShouldReturn:(id)arg0;
- (char)parser:(NSXMLParser *)arg0 shouldAcceptToken:(int)arg1;
- (void)parser:(NSXMLParser *)arg0 shouldTransitionTo:(int)arg1;
- (char)needKey;
- (NSString *)name;

@end
