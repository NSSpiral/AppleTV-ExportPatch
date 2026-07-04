/* Runtime dump - TSCEEdgeListPrinter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEEdgeListPrinter : NSObject
{
    NSMutableDictionary * _edgesForOwner;
}

- (NSObject *)stringForOwnerID:(NSObject *)arg0 withLimit:(unsigned int)arg1;
- (void)addEdge:(id)arg0 forOwner:(NSObject *)arg1;
- (NSString *)stringForEdgesWithLimit:(unsigned int)arg0;
- (void)dealloc;

@end
