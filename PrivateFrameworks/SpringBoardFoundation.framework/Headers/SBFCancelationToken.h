/* Runtime dump - SBFCancelationToken
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFCancelationToken : NSObject <SBFCancelable>
{
    char _isCanceled;
    NSMutableArray * _cancelationBlocks;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SBFCancelationToken *)tokenWithCancelationBlock:(id /* block */)arg0;
+ (SBFCancelationToken *)tokenWrappingCancelable:(id)arg0;

- (void)cancel;
- (void)dealloc;
- (SBFCancelationToken *)init;
- (char)isCanceled;
- (void)addCancelationBlock:(id /* block */)arg0;
- (id)nts_cancel;
- (void)callCancelationBlocks:(id)arg0;

@end
