/* Runtime dump - IDSAppleRegistrationKeychainReader
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSAppleRegistrationKeychainReader : NSObject
{
    NSMutableArray * _registrationData;
    IMTimer * _purgeTimer;
    id _purgeCancelBlock;
    id _purgeEnqueueBlock;
}

+ (IDSAppleRegistrationKeychainReader *)sharedInstance;
+ (NSString *)keychainServiceForVersion:(unsigned int)arg0;
+ (NSString *)keychainAccountForVersion:(unsigned int)arg0;
+ (NSString *)keychainAccessGroupForVersion:(unsigned int)arg0;

- (void)dealloc;
- (IDSAppleRegistrationKeychainReader *)init;
- (NSObject *)registrationWithServiceType:(NSObject *)arg0 accountType:(int)arg1 value:(NSObject *)arg2;
- (void)_reloadFromKeychainLocked;
- (void)_setPurgeTimer;
- (void)_reloadFromDictionaryLocked:(id)arg0;
- (NSMutableArray *)registrationData;
- (void)flushCache;
- (void)_flush;

@end
