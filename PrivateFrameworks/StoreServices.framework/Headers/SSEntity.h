/* Runtime dump - SSEntity
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSEntity : NSObject <SSXPCCoding>
{
    SSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _localExternalValues;
    NSMutableDictionary * _localValues;
    long long _pid;
    NSArray * _dirtyLocalExternalProperties;
    NSArray * _dirtyLocalProperties;
}

@property (readonly) char exists;
@property (readonly) long long _persistentIdentifier;
@property (copy) NSDictionary * _localExternalValues;
@property (copy) NSDictionary * _localValues;
@property (readonly) char _managed;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (long long)_existsMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_setExternalValuesMessage;
+ (long long)_setValuesMessage;

- (NSDictionary *)copyXPCEncoding;
- (void)dealloc;
- (SSEntity *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void *)valueForProperty:(NSString *)arg0;
- (char)exists;
- (void)getValues:(id *)arg0 forProperties:(id *)arg1 count:(NSObject *)arg2;
- (char)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1;
- (NSString *)_initWithPersistentIdentifier:(long long)arg0;
- (void)_becomeManagedOnConnection:(NSURLConnection *)arg0;
- (NSObject *)valueForExternalProperty:(NSObject *)arg0;
- (char)_isManaged;
- (char)setExternalValuesWithDictionary:(NSDictionary *)arg0;
- (char)setValuesWithDictionary:(NSDictionary *)arg0;
- (void)_resetLocalIVars;
- (void)_addCachedExternalValues:(NSArray *)arg0;
- (void)_addCachedPropertyValues:(NSArray *)arg0;
- (NSDictionary *)_localExternalValues;
- (void)_setLocalExternalValues:(NSArray *)arg0;
- (NSDictionary *)_localValues;
- (void)_setLocalValues:(NSArray *)arg0;
- (void)_setDirtyCachedExternalProperties:(NSDictionary *)arg0;
- (void)_setDirtyCachedProperties:(NSDictionary *)arg0;
- (void)_getValues:(id *)arg0 forProperties:(id *)arg1 count:(NSObject *)arg2 message:(unsigned int)arg3;
- (void)getValues:(id *)arg0 forExternalProperties:(id *)arg1 count:(NSObject *)arg2;
- (long long)_persistentIdentifier;
- (void)__addCachedExternalValues:(NSArray *)arg0;
- (void)__addCachedPropertyValues:(NSArray *)arg0;
- (void)resetCachedExternalProperties:(id *)arg0 count:(NSObject *)arg1;
- (void)resetCachedProperties:(id *)arg0 count:(NSObject *)arg1;

@end
