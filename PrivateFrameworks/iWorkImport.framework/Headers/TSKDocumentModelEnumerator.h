/* Runtime dump - TSKDocumentModelEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKDocumentModelEnumerator : NSEnumerator
{
    char _stop;
    <TSKModel> * _root;
    NSMutableArray * _enumeratorStack;
    id _filter;
}

@property (retain, nonatomic) <TSKModel> * root;
@property (retain, nonatomic) NSMutableArray * enumeratorStack;
@property (copy, nonatomic) id filter;

- (void)enumerateUsingBlock:(id /* block */)arg0;
- (void)enumerateStyleClientsUsingBlock:(id /* block */)arg0;
- (TSKDocumentModelEnumerator *)initWithRootModelObject:(NSObject *)arg0 filter:(id /* block */)arg1;
- (void)setEnumeratorStack:(NSMutableArray *)arg0;
- (NSMutableArray *)enumeratorStack;
- (TSKDocumentModelEnumerator *)initWithEnumerator:(NSEnumerator *)arg0 filter:(id /* block */)arg1;
- (void)enumerateReferencedStylesUsingBlock:(id /* block */)arg0;
- (void)dealloc;
- (NSObject *)nextObject;
- (void)setFilter:(NSObject *)arg0;
- (<TSKModel> *)root;
- (void)setRoot:(<TSKModel> *)arg0;
- (CIFilter *)filter;

@end
