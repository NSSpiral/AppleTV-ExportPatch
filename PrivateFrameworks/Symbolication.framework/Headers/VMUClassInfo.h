/* Runtime dump - VMUClassInfo
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUClassInfo : NSObject <NSCoding>
{
    id _reader;
    unsigned long long _remoteIsa;
    unsigned long long _specificInstance;
    unsigned int _remotePointerSize;
    unsigned int _ivarCount;
    unsigned int _superclassOffset;
    unsigned int _instanceSize;
    unsigned int _ro_flags;
    unsigned int _rw_flags;
    struct objc_ivar * * _localIvarList;
    int * _ivarScanSizes;
    unsigned int _remoteType;
    NSString * _remoteClassName;
    NSString * _remoteBinaryName;
    VMUClassInfo * _superclassLayout;
    char * _weakLayout;
    char * _strongLayout;
    char * _extendedLayout;
    char * _scanMap;
    char _hasSpecificLayout;
}

@property (readonly) NSString * typeName;
@property (readonly) NSString * className;
@property (readonly) NSString * binaryName;
@property (readonly) NSString * fullIvarDescription;
@property (readonly) NSString * shortIvarDescription;
@property (readonly) VMUClassInfo * superclassInfo;
@property (readonly) int infoType;
@property (readonly) unsigned long long remoteIsa;
@property (readonly) unsigned long long specificInstance;
@property (readonly) unsigned int instanceSize;
@property (readonly) char isARR;
@property (readonly) char isRealized;
@property (readonly) char isMetaClass;
@property (readonly) char isRootClass;
@property (readonly) char hasCppConstructorOrDestructor;
@property (readonly, nonatomic) char hasSpecificLayout;

+ (void)initialize;
+ (NSString *)classInfoWithClassName:(NSString *)arg0 binaryName:(NSString *)arg1 type:(int)arg2;
+ (NSString *)descriptionForTypeEncoding:(char *)arg0 ivarName:(char *)arg1;

- (void)dealloc;
- (VMUClassInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)debugDescription;
- (NSString *)type;
- (NSString *)className;
- (NSString *)typeName;
- (VMUClassInfo *)initWithClassName:(NSString *)arg0 binaryName:(NSString *)arg1 type:(int)arg2;
- (char *)_copyRemoteStringAt:(SEL)arg0;
- (int)_readRemoteIntAt:(unsigned long long)arg0;
- (void)_faultScanMap;
- (void)_processExtendedLayout:(char *)arg0;
- (char)isARR;
- (void)_processARRLayout:(char *)arg0 scanType:(int)arg1;
- (char)hasSpecificLayout;
- (unsigned long long)_readRemotePointerAt:(unsigned long long)arg0;
- (char)isRealized;
- (struct objc_ivar *)_copyRemoteIvarAt:(unsigned long long)arg0;
- (char *)_copyRemoteLayout:(SEL)arg0;
- (void)_parseIvarsAndLayouts;
- (char)isRootClass;
- (NSObject *)_initWithClass:(unsigned long long)arg0 realizedOnly:(char)arg1 infoMap:(NSObject *)arg2 symbolicator:(struct _CSTypeRef)arg3 type:(int)arg4 memoryReader:(NSObject *)arg5;
- (void)_setClassNameWithAddress:(unsigned long long)arg0;
- (NSString *)binaryName;
- (VMUClassInfo *)initWithClass:(unsigned long long)arg0 infoMap:(NSObject *)arg1 symbolicator:(struct _CSTypeRef)arg2 type:(int)arg3 memoryReader:(NSObject *)arg4;
- (unsigned long long)remoteIsa;
- (int)infoType;
- (char)hasCppConstructorOrDestructor;
- (void)_logDescriptionWithSuperclasses:(char)arg0 indentation:(int)arg1 toLogger:(Logger *)arg2;
- (NSString *)_ivarDescription:(unsigned int)arg0 withSpacing:(unsigned int)arg1;
- (NSObject *)instanceSpecificInfoForObject:(unsigned long long)arg0;
- (void)enumerateScanLocationsToSize:(unsigned int)arg0 withBlock:(id /* block */)arg1;
- (NSObject *)_instanceSpecificInfoForObject:(unsigned long long)arg0 pointerSize:(unsigned int)arg1 reader:(NSObject *)arg2;
- (void)enumerateKnownSublayoutsForObject:(unsigned long long)arg0 withBlock:(id /* block */)arg1;
- (id)_specificCopy:(unsigned long long)arg0 instanceSize:(unsigned int)arg1 superclassOffset:(unsigned int)arg2;
- (void)_setExtendedLayout:(char *)arg0;
- (void)setMemoryReader:(NSObject *)arg0;
- (void)enumerateIvarsWithBlock:(id /* block */)arg0;
- (NSString *)fullIvarDescription;
- (VMUClassInfo *)initWithRealizedClass:(unsigned long long)arg0 infoMap:(NSObject *)arg1 symbolicator:(struct _CSTypeRef)arg2 type:(int)arg3 memoryReader:(NSObject *)arg4;
- (VMUClassInfo *)initWithIsaPointer:(unsigned int)arg0 symbolicator:(struct _CSTypeRef)arg1;
- (void)scanObject:(unsigned long long)arg0 ofSize:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (struct objc_ivar *)ivarWithOffset:(unsigned long long)arg0;
- (NSString *)shortIvarDescription;
- (char)isMetaClass;
- (unsigned int)instanceSize;
- (unsigned long long)specificInstance;
- (VMUClassInfo *)superclassInfo;

@end
