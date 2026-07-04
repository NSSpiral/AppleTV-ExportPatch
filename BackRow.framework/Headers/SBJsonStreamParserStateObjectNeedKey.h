/* Runtime dump - SBJsonStreamParserStateObjectNeedKey
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/SBJsonStreamParserState.h>
@interface SBJsonStreamParserStateObjectNeedKey : SBJsonStreamParserState

+ (SBJsonStreamParserStateObjectNeedKey *)sharedInstance;

- (char)parser:(NSXMLParser *)arg0 shouldAcceptToken:(int)arg1;
- (void)parser:(NSXMLParser *)arg0 shouldTransitionTo:(int)arg1;
- (char)needKey;
- (NSString *)name;

@end
