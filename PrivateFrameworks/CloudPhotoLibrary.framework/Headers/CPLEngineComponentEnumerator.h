/* Runtime dump - CPLEngineComponentEnumerator
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineComponentEnumerator : NSObject
{
    NSEnumerator * _enumerator;
    id _handler;
}

- (void).cxx_destruct;
- (void)nextComponent;
- (CPLEngineComponentEnumerator *)initWithComponents:(NSArray *)arg0 handler:(id /* block */)arg1;

@end
