/* Runtime dump - NSBlockOperation
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBlockOperation : NSOperation
{
    id _private2;
    void * _reserved2;
}

@property (readonly, copy) NSArray * executionBlocks;

+ (NSBlockOperation *)blockOperationWithBlock:(id /* block */)arg0;

- (NSBlockOperation *)initWithBlock:(id /* block */)arg0;
- (void)dealloc;
- (NSBlockOperation *)init;
- (void)main;
- (NSArray *)executionBlocks;
- (void)addExecutionBlock:(id /* block */)arg0;
- (void)finalize;

@end
