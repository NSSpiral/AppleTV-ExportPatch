/* Runtime dump - SBJsonStreamParserAccumulator
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol SBJsonStreamParserAdapterDelegate;

@class SBJsonStreamParser;
@interface SBJsonStreamParserAccumulator : NSObject <SBJsonStreamParserAdapterDelegate>
{
    id value;
}

@property (readonly, copy) id value;

- (void)parser:(SBJsonStreamParser *)arg0 foundArray:(NSArray *)arg1;
- (void)parser:(SBJsonStreamParser *)arg0 foundObject:(NSDictionary *)arg1;
- (void *)value;
- (void).cxx_destruct;

@end
