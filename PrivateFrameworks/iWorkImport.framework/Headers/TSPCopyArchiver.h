/* Runtime dump - TSPCopyArchiver
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPCopyArchiver : TSPArchiver <TSPProxyObjectMappingProvider>
{
    <TSPProxyObjectMapping> * _proxyObjectMapping;
}

@property (weak, nonatomic) <TSPProxyObjectMapping> * proxyObjectMapping;

- (void)setStrongReference:(NSObject *)arg0 message:(struct Reference *)arg1;
- (void)setWeakReference:(AVWeakReference *)arg0 message:(struct Reference *)arg1;
- (char)isForCopy;
- (void)setStrongLazyReference:(NSObject *)arg0 message:(struct Reference *)arg1;
- (void)setWeakLazyReference:(NSObject *)arg0 message:(struct Reference *)arg1;
- (<TSPProxyObjectMapping> *)proxyObjectMapping;
- (void)setProxyObjectMapping:(<TSPProxyObjectMapping> *)arg0;
- (void).cxx_destruct;

@end
