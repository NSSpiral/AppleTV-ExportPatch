/* Runtime dump - AOSTransaction
 * Image: /System/Library/PrivateFrameworks/AOSKit.framework/AOSKit
 */

@interface AOSTransaction : NSObject <NSCoding>
{
    unsigned char didSucceed;
    unsigned char didFinish;
    void * result;
    struct __CFError * error;
    /* block */ id * callbackFunction;
    id callbackBlock;
    NSObject<OS_dispatch_queue> * callbackQueue;
    void * context;
    NSConditionLock * waitLock;
    /* block */ id * contextRetain;
    /* block */ id * contextRelease;
}

- (void)dealloc;
- (AOSTransaction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (AOSTransaction *)init;
- (void *)result;
- (char)isSuccessful;
- (struct __CFError *)error;
- (void)finalize;

@end
