/* Runtime dump - SBJsonStreamParserStateObjectGotValue
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/SBJsonStreamParserState.h>
@interface SBJsonStreamParserStateObjectGotValue : SBJsonStreamParserState

+ (SBJsonStreamParserStateObjectGotValue *)sharedInstance;

- (char)parser:(NSXMLParser *)arg0 shouldAcceptToken:(int)arg1;
- (void)parser:(NSXMLParser *)arg0 shouldTransitionTo:(int)arg1;
- (NSString *)name;

@end
