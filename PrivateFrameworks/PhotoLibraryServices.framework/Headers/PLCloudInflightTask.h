/* Runtime dump - PLCloudInflightTask
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudInflightTask : NSObject
{
    id _progressBlock;
    id _completionHandler;
}

@property (readonly) id progressBlock;
@property (readonly) id completionHandler;

- (void)dealloc;
- (id /* block */)completionHandler;
- (PLCloudInflightTask *)initWithProgressBlock:(id /* block */)arg0 completionHandler:(/* block */ id)arg1;
- (id /* block */)progressBlock;

@end
