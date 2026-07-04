/* Runtime dump - TSDStyleWarmingOperation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDStyleWarmingOperation : NSOperation
{
    TSSStyle * mStyle;
    int mProperty;
    TSKAccessController * mAccessController;
}

- (TSDStyleWarmingOperation *)initWithStyle:(NSObject *)arg0 property:(int)arg1 accessController:(TSKAccessController *)arg2;
- (void)warm;
- (void)main;

@end
