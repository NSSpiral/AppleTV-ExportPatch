/* Runtime dump - ATVCupidAOSynchronizer
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVCupidAccessObject;
@interface ATVCupidAOSynchronizer : NSObject
{
    id _accessObject;
}

@property (retain, nonatomic) id accessObject;

+ (NSObject *)syncAccessObjectWithFactory:(NSObject *)arg0;
+ (void)initialize;

- (ATVCupidAccessObject *)accessObject;
- (void)queueOperation:(NSObject *)arg0;
- (void)setAccessObject:(NSObject *)arg0;
- (void)tearDownWithHandler:(<BRSelectionHandler> *)arg0;
- (void)queuePostOperation:(NSObject *)arg0;
- (ATVCupidAOSynchronizer *)init;
- (void).cxx_destruct;
- (ATVCupidAOSynchronizer *)initWithFactory:(NSObject *)arg0;

@end
