/* Runtime dump - HMObjectMergeOperations
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMObjectMergeOperations : NSObject
{
    NSMutableArray * _operations;
}

@property (retain, nonatomic) NSMutableArray * operations;

- (void)_executeOperationsOnQueue:(NSObject *)arg0;
- (HMObjectMergeOperations *)init;
- (void).cxx_destruct;
- (void)setOperations:(NSMutableArray *)arg0;
- (NSMutableArray *)operations;
- (void)_addOperation:(NSObject *)arg0;

@end
