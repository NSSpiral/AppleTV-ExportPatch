/* Runtime dump - IKDOMInitializer
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMInitializer : NSObject
{
    NSMutableDictionary * _nodeDeregisterObservers;
}

@property (retain, nonatomic) NSMutableDictionary * nodeDeregisterObservers;

+ (IKDOMInitializer *)sharedInstance;

- (IKDOMInitializer *)init;
- (void).cxx_destruct;
- (NSMutableDictionary *)nodeDeregisterObservers;
- (void)addNodeDeregisterObserverWithName:(NSString *)arg0 observer:(NSObject *)arg1;
- (void)removeNodeDeregisterObserverWithName:(NSString *)arg0;
- (void)setNodeDeregisterObservers:(NSMutableDictionary *)arg0;

@end
