/* Runtime dump - CFPrefsPlistSource
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsPlistSource : CFPrefsSource
{
    NSObject<OS_dispatch_group> * _synchGroup;
    struct __CFString * userIdentifier;
    struct __CFString * domainIdentifier;
    struct __CFString * container;
    struct __CFDictionary * _locallySetDict;
    char * accessPath;
    struct ? _flags;
}

- (void)setDomainIdentifier:(struct __CFString *)arg0;
- (void)setUserIdentifier:(struct __CFString *)arg0;
- (struct __CFArray *)alreadylocked_copyKeyList;
- (struct __CFDictionary *)alreadylocked_copyDictionary;
- (struct __CFString *)domainIdentifier;
- (struct __CFString *)userIdentifier;
- (long)sendMessageSettingValue:(void *)arg0 forKey:(struct __CFString *)arg1;
- (char)handleErrorReply:(id /* block */)arg0 fromMessageSettingKey:(struct __CFString *)arg1 toValue:(void *)arg2 retryCount:(int)arg3 retryContinuation:(id)arg4;
- (char)attachAccessTokenToMessage:(NSString *)arg0;
- (void)sendFullyPreparedMessage:(NSString *)arg0 settingValue:(void *)arg1 forKey:(struct __CFString *)arg2 retryCount:(int)arg3;
- (NSString *)createSynchronizeMessage;
- (void)addPIDImpersonationIfNecessary:(id)arg0;
- (id)createRequestNewContentMessageForDaemon:(char)arg0;
- (void)sendRequestNewDataMessage:(NSString *)arg0 toConnection:(NSURLConnection *)arg1 retryCount:(int)arg2 error:(char *)arg3;
- (char)volatilizeIfInvalidHomeDir;
- (char)handleErrorReply:(id /* block */)arg0 retryCount:(int)arg1 retryContinuation:(id)arg2;
- (void)handleReply:(id /* block */)arg0 toRequestNewDataMessage:(NSString *)arg1 onConnection:(NSURLConnection *)arg2 retryCount:(int)arg3 error:(char *)arg4;
- (void)_sharedCleanup;
- (char)isByHost;
- (CFPrefsPlistSource *)initWithDomain:(struct __CFString *)arg0 user:(struct __CFString *)arg1 byHost:(char)arg2 containerPath:(struct __CFString *)arg3;
- (void)setAccessRestricted:(char)arg0;
- (void)setDaemonCacheEnabled:(char)arg0;
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg0;
- (void)mergeIntoDictionary:(struct __CFDictionary *)arg0;
- (void *)copyValueForKey:(struct __CFString *)arg0;
- (void)alreadylocked_setValue:(void *)arg0 forKey:(struct __CFString *)arg1;
- (char)alreadylocked_requestNewData;
- (long)alreadylocked_generationCount;
- (void)dealloc;
- (NSString *)description;
- (char)synchronize;
- (void)setContainer:(struct __CFString *)arg0;
- (struct __CFString *)container;
- (long)generationCount;
- (void)clearCache;
- (void)finalize;

@end
