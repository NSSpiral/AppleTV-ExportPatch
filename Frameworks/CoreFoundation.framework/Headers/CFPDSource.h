/* Runtime dump - CFPDSource
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDSource : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    CFPDDataBuffer * _plist;
    struct __CFArray * _pendingChangesQueue;
    struct __CFString * _userName;
    struct __CFString * _domain;
    char * _actualPath;
    char * _pathToTemporaryFileToWriteTo;
    unsigned int _lastEuid;
    unsigned int _lastEgid;
    int _owner;
    short _generationShmemIndex;
    char _plistAccessingCount;
    id _dirty;
    id _byHost;
    id _managed;
    id _neverCache;
    id _checkedForNonPrefsPlist;
    id _hasDrainedPendingChangesSinceLastReplyToOwner;
    id _restrictedReadability;
    id _waitingForDeviceUnlock;
}

+ (void)withSourceCache:(NSObject *)arg0;
+ (void)synchronousWithSourceCache:(NSObject *)arg0;
+ (void)withSourceForDomain:(struct __CFString *)arg0 inContainer:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(char)arg3 managed:(char)arg4 synchronously:(char)arg5 perform:(id)arg6;

- (void)writeToDisk:(char)arg0;
- (void)cacheActualPathCreatingIfNecessary:(char)arg0 euid:(unsigned int)arg1 egid:(unsigned int)arg2;
- (char)getUncanonicalizedPath:(char *)arg0;
- (CFPDSource *)initWithDomain:(struct __CFString *)arg0 userName:(struct __CFString *)arg1 byHost:(char)arg2 managed:(char)arg3 shmemIndex:(short)arg4;
- (void)noteAccessed;
- (void)lockedAsync:(id)arg0;
- (void)lockedSync:(id)arg0;
- (char)hasEverHadMultipleOwners;
- (void)transitionToMultiOwner;
- (struct __CFString *)debugDump;
- (void)updateShmemEntry;
- (void)beginAccessingPlist;
- (void)endAccessingPlist;
- (void)drainPendingChanges;
- (void)setDirty:(char)arg0;
- (void)cacheActualPath;
- (void)autosync:(char)arg0;
- (id)propertyListWithoutDrainingPendingChanges;
- (void)setPlist:(CFPDDataBuffer *)arg0;
- (NSArray *)propertyList;
- (char)validateSandboxForWrite:(id)arg0 containerPath:(char *)arg1 targetingContainer:(char *)arg2;
- (char)validateReadAccessToken:(int)arg0;
- (char)validateSandboxForRead:(id)arg0 containerPath:(char *)arg1;
- (void)cacheActualAndTemporaryPathsWithEUID:(unsigned int)arg0 egid:(unsigned int)arg1;
- (int)validateMessage:(NSString *)arg0 withNewKey:(struct __CFString *)arg1 newValue:(void *)arg2 currentPlistData:(NSData *)arg3 containerPath:(char *)arg4 diagnosticMessage:(char * *)arg5;
- (void)enqueueNewKey:(struct __CFString *)arg0 value:(void *)arg1;
- (char)managed;
- (void)addOwner:(NSObject *)arg0;
- (void)removeOwner;
- (char)byHost;
- (short)shmemIndex;
- (NSString *)acceptMessage:(NSString *)arg0;
- (unsigned char)_backingPlistChangedSinceLastSync:(unsigned long long *)arg0;
- (char)clearCacheIfStale:(unsigned long long *)arg0;
- (char)acceptLocalMessage:(NSString *)arg0 withReply:(struct __CFDictionary *)arg1 inode:(unsigned long long *)arg2;
- (void)dealloc;
- (NSString *)description;
- (struct __CFString *)domain;
- (struct __CFString *)container;
- (void)clearCache;
- (struct __CFString *)user;

@end
