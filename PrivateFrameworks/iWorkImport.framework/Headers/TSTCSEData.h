/* Runtime dump - TSTCSEData
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCSEData : NSObject
{
    struct /* ? */ _nodesToData;
    NSMutableDictionary * _hashesToNodeSets;
}

- (NSObject *)expressionsIdenticalToExpression:(NSObject *)arg0;
- (unsigned int)expressionSize:(NSObject *)arg0;
- (void)recordExpression:(NSObject *)arg0 data:(struct TSTCSENodeData)arg1;
- (NSData *)expressionsMatchingCSENodeData:(struct TSTCSENodeData)arg0 forNode:(NSObject *)arg1;
- (void)dealloc;
- (TSTCSEData *)init;
- (NSString *)description;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
