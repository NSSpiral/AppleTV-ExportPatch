/* Runtime dump - NSUserDefaults
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSUserDefaults : NSObject
{
    id _private;
    id _reserved;
}

+ (void)mf_setCompositionServicesPreferenceValue:(id)arg0 forKey:(NSString *)arg1;
+ (NSString *)mf_copyCompositionServicesPreferenceValueForKey:(NSString *)arg0;
+ (NSUserDefaults *)_webkit_preferredLanguageCode;
+ (NSString *)_IMAppObjectForKey:(NSString *)arg0;
+ (NSString *)_IMObjectForKey:(NSString *)arg0 inDomain:(NSString *)arg1;
+ (NSString *)_IMAgentObjectForKey:(NSString *)arg0;
+ (void)_IMSetObject:(NSObject *)arg0 forKey:(NSString *)arg1 inDomain:(NSString *)arg2;
+ (void)_ensureAndLockPreferredLanguageLock;
+ (void)_web_addDefaultsChangeObserver;
+ (void)_web_defaultsDidChange;
+ (NSUserDefaults *)_web_preferredLanguageCode;
+ (void)setStandardUserDefaults:(id)arg0;
+ (void)resetStandardUserDefaults;
+ (NSUserDefaults *)standardUserDefaults;

- (NSString *)tsk_keyForRole:(NSString *)arg0;
- (NSString *)tsk_objectForKey:(NSString *)arg0 inRole:(NSString *)arg1;
- (void)tsk_setObject:(NSObject *)arg0 forKey:(NSString *)arg1 inRole:(NSString *)arg2;
- (NSString *)tskp_currentRole;
- (void)tsk_removeObjectForKey:(NSString *)arg0 inRole:(NSString *)arg1;
- (NSString *)tsk_stringForKey:(NSString *)arg0 inRole:(NSString *)arg1;
- (NSString *)tsk_arrayForKey:(NSString *)arg0 inRole:(NSString *)arg1;
- (NSString *)tsk_dictionaryForKey:(NSString *)arg0 inRole:(NSString *)arg1;
- (NSString *)tsk_dataForKey:(NSString *)arg0 inRole:(NSString *)arg1;
- (int)tsk_integerForKey:(NSString *)arg0 inRole:(NSString *)arg1;
- (float)tsk_floatForKey:(NSString *)arg0 inRole:(NSString *)arg1;
- (double)tsk_doubleForKey:(NSString *)arg0 inRole:(NSString *)arg1;
- (char)tsk_boolForKey:(NSString *)arg0 inRole:(NSString *)arg1;
- (void)tsk_setInteger:(int)arg0 forKey:(NSString *)arg1 inRole:(NSString *)arg2;
- (void)tsk_setFloat:(float)arg0 forKey:(NSString *)arg1 inRole:(NSString *)arg2;
- (void)tsk_setDouble:(double)arg0 forKey:(NSString *)arg1 inRole:(NSString *)arg2;
- (void)tsk_setBool:(char)arg0 forKey:(NSString *)arg1 inRole:(NSString *)arg2;
- (NSString *)tsk_objectForKeyInCurrentRole:(NSString *)arg0;
- (void)tsk_setObject:(NSObject *)arg0 forKeyInCurrentRole:(NSString *)arg1;
- (void)tsk_removeObjectForKeyInCurrentRole:(NSString *)arg0;
- (NSString *)tsk_stringForKeyInCurrentRole:(NSString *)arg0;
- (NSString *)tsk_arrayForKeyInCurrentRole:(NSString *)arg0;
- (NSString *)tsk_dictionaryForKeyInCurrentRole:(NSString *)arg0;
- (NSString *)tsk_dataForKeyInCurrentRole:(NSString *)arg0;
- (int)tsk_integerForKeyInCurrentRole:(NSString *)arg0;
- (float)tsk_floatForKeyInCurrentRole:(NSString *)arg0;
- (double)tsk_doubleForKeyInCurrentRole:(NSString *)arg0;
- (char)tsk_boolForKeyInCurrentRole:(NSString *)arg0;
- (void)tsk_setInteger:(int)arg0 forKeyInCurrentRole:(NSString *)arg1;
- (void)tsk_setFloat:(float)arg0 forKeyInCurrentRole:(NSString *)arg1;
- (void)tsk_setDouble:(double)arg0 forKeyInCurrentRole:(NSString *)arg1;
- (void)tsk_setBool:(char)arg0 forKeyInCurrentRole:(NSString *)arg1;
- (char)delayedSynchronize;
- (char)boolValueSafeForKey:(NSString *)arg0 status:(int *)arg1;
- (long long)int64ValueSafeForKey:(NSString *)arg0 status:(int *)arg1;
- (double)doubleValueSafeForKey:(NSString *)arg0 status:(int *)arg1;
- (NSString *)stringValueSafeForKey:(NSString *)arg0 status:(int *)arg1;
- (char *)utf8ValueSafeForKey:(SEL)arg0 status:(int *)arg1;
- (char)boolValueSafeForKey:(NSString *)arg0;
- (long long)int64ValueSafeForKey:(NSString *)arg0;
- (double)doubleValueSafeForKey:(NSString *)arg0;
- (NSString *)stringValueSafeForKey:(NSString *)arg0;
- (char *)utf8ValueSafeForKey:(SEL)arg0;
- (NSString *)volatileDomainForName:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1 inDomain:(NSString *)arg2;
- (NSString *)_initWithSuiteName:(NSString *)arg0 container:(NSObject *)arg1;
- (NSUserDefaults *)initWithUser:(HMUser *)arg0;
- (void)setPersistentDomain:(NSString *)arg0 forName:(NSString *)arg1;
- (NSString *)objectForKey:(NSString *)arg0 inDomain:(NSString *)arg1;
- (void)removeObjectForKey:(NSString *)arg0 inDomain:(NSString *)arg1;
- (long long)longForKey:(NSString *)arg0;
- (NSString *)URLForKey:(NSString *)arg0;
- (void)setLong:(long long)arg0 forKey:(NSString *)arg1;
- (void)setFloat:(float)arg0 forKey:(NSString *)arg1;
- (void)setDouble:(double)arg0 forKey:(NSString *)arg1;
- (NSArray *)searchList;
- (void)setSearchList:(NSArray *)arg0;
- (void)removeSuiteNamed:(id)arg0;
- (NSArray *)volatileDomainNames;
- (void)setVolatileDomain:(NSString *)arg0 forName:(NSString *)arg1;
- (void)removeVolatileDomainForName:(NSString *)arg0;
- (NSArray *)persistentDomainNames;
- (void)removePersistentDomainForName:(NSString *)arg0;
- (char)objectIsForcedForKey:(NSString *)arg0;
- (char)objectIsForcedForKey:(NSString *)arg0 inDomain:(NSString *)arg1;
- (void)setInteger:(int)arg0 forKey:(NSString *)arg1;
- (char)boolForKey:(NSString *)arg0;
- (void)release;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (NSUserDefaults *)init;
- (NSString *)persistentDomainForName:(NSString *)arg0;
- (void)removeObjectForKey:(NSString *)arg0;
- (float)floatForKey:(NSString *)arg0;
- (char)synchronize;
- (NSUserDefaults *)initWithSuiteName:(NSString *)arg0;
- (NSString *)stringForKey:(NSString *)arg0;
- (void)setBool:(char)arg0 forKey:(NSString *)arg1;
- (void)addSuiteNamed:(id)arg0;
- (double)doubleForKey:(NSString *)arg0;
- (int)integerForKey:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)registerDefaults:(id)arg0;
- (NSString *)dictionaryForKey:(NSString *)arg0;
- (NSString *)dataForKey:(NSString *)arg0;
- (void)setURL:(NSString *)arg0 forKey:(NSString *)arg1;
- (NSString *)stringArrayForKey:(NSString *)arg0;
- (NSString *)arrayForKey:(NSString *)arg0;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;

@end
