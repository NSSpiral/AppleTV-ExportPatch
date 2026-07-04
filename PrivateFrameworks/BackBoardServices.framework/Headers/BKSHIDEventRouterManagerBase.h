/* Runtime dump - BKSHIDEventRouterManagerBase
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventRouterManagerBase : NSObject
{
    NSArray * _eventRouters;
}

@property (retain, nonatomic) NSArray * eventRouters;

- (BKSHIDEventRouterManagerBase *)init;
- (NSString *)description;
- (void)setEventRouters:(NSArray *)arg0;
- (NSArray *)eventRouters;
- (int)routerDestinationForDescriptor:(NSObject *)arg0;

@end
