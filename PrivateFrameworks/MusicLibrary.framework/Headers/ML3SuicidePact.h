/* Runtime dump - ML3SuicidePact
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3SuicidePact : NSObject
{
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableSet * _signatures;
    int _notifyToken;
}

@property (readonly, nonatomic) char isSigned;

+ (ML3SuicidePact *)sharedPact;

- (void)dealloc;
- (ML3SuicidePact *)init;
- (void).cxx_destruct;
- (char)isSigned;
- (void)signForReason:(int)arg0;
- (void)_carryOutSuicidePact;
- (void)secedeForReason:(int)arg0;
- (char)isSignedForReason:(int)arg0;
- (void)execute;

@end
