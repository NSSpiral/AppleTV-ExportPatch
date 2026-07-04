/* Runtime dump - MMCSPutFile
 * Image: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
 */

@interface MMCSPutFile : MMCSSimpleFile
{
    id _block;
    id _updateBlock;
}

@property (copy) id completionBlock;
@property (copy) id progressUpdateBlock;

- (void)dealloc;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)setProgress:(double)arg0;
- (void)setProgressUpdateBlock:(id /* block */)arg0;
- (id /* block */)progressUpdateBlock;

@end
