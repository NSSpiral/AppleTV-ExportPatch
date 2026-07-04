/* Runtime dump - VMUObjectIdentifier
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUObjectIdentifier : NSObject
{
    unsigned int _task;
    struct _CSTypeRef _symbolicator;
    id _memoryReader;
    VMUClassInfoMap * _isaToClassInfo;
    VMUClassInfoMap * _cfTypeIDtoClassInfo;
    VMUClassInfoMap * _unrealizedClassInfos;
    unsigned long _coreFoundationCFTypeIsa;
    unsigned long _foundationCFTypeIsa;
    unsigned int _swiftClassCount;
    id _isaTranslator;
    unsigned int * _nonPointerIndexMapping;
    void * _remoteObjectBuffer;
    unsigned long _remoteObjectBufferSize;
    NSMapTable * _isaToObjectLabelHandlerMap;
    NSMapTable * _itemCountToLabelStringUniquingMap;
    struct VMULabelUniquingDataForStringType * _stringToLabelStringUniquingData;
    NSMutableSet * _stringUniquingSet;
    NSHashTable * _objcRuntimeMallocBlocksHash;
    VMUNonOverlappingRangeArray * _targetProcessVMranges;
}

- (VMUObjectIdentifier *)initWithTask:(unsigned int)arg0;
- (void)dealloc;
- (void)findCFTypes;
- (void)findObjCclasses;
- (void)enumerateRealizedClassInfosWithBlock:(id /* block */)arg0;
- (id)classInfoForMemory:(void *)arg0 length:(unsigned int)arg1;
- (id)classInfoForNonobjectMemory:(void *)arg0 length:(unsigned int)arg1;
- (NSObject *)_faultClass:(unsigned long long)arg0 ofType:(int)arg1;
- (NSString *)osMajorMinorVersionString;
- (void)buildIsaToObjectLabelHandlerMap;
- (NSString *)labelForNSString:(NSString *)arg0 mappedSize:(unsigned int)arg1 remoteAddress:(unsigned int)arg2 printDetail:(char)arg3;
- (NSString *)uniquifyStringLabel:(NSString *)arg0 stringType:(int)arg1 printDetail:(char)arg2;
- (id)objectLabelHandlerForRemoteIsa:(unsigned int)arg0;
- (NSString *)labelForNSString:(NSString *)arg0;
- (NSString *)labelForNSCFStringAtRemoteAddress:(unsigned int)arg0 printDetail:(char)arg1;
- (NSURL *)labelForNSURL:(NSURL *)arg0;
- (id)labelForMallocBlock:(struct _VMURange)arg0 usingHandlerBlock:(id /* block */)arg1;
- (NSNumber *)labelForItemCount:(long)arg0;
- (NSDictionary *)labelForNSDictionary:(NSDictionary *)arg0;
- (NSSet *)labelForNSSet:(NSSet *)arg0;
- (id)labelForMemory:(void *)arg0 length:(unsigned int)arg1 usingHandlerBlock:(id /* block */)arg2;
- (VMUObjectIdentifier *)initWithTask:(unsigned int)arg0 symbolicator:(struct _CSTypeRef)arg1;
- (NSObject *)classInfoForObjectWithRange:(struct _VMURange)arg0;
- (unsigned int)CFTypeCount;
- (unsigned int)ObjCclassCount;
- (unsigned int)SwiftClassCount;
- (NSHashTable *)objcRuntimeMallocBlocksHash;
- (void)enumerateAllClassInfosWithBlock:(id /* block */)arg0;
- (NSDictionary *)nullClassInfo;
- (struct _VMURange)vmRegionRangeForAddress:(unsigned long long)arg0;
- (NSString *)labelForNSConcreteAttributedString:(NSString *)arg0;
- (NSObject *)labelForNSPathStore2:(NSObject *)arg0;
- (NSNumber *)labelForNSNumber:(NSNumber *)arg0;
- (NSDate *)labelForNSDate:(NSDate *)arg0;
- (NSArray *)labelForNSArray:(NSArray *)arg0;
- (NSDictionary *)labelForNSCFDictionary:(NSDictionary *)arg0;
- (id)labelForNSConcreteHashTable:(id)arg0;
- (NSSet *)labelForNSCFSet:(NSSet *)arg0;
- (NSData *)labelForNSData:(NSData *)arg0;
- (NSData *)labelForNSConcreteData:(NSData *)arg0;
- (NSData *)labelForNSConcreteMutableData:(NSData *)arg0;
- (NSData *)labelForNSInlineData:(NSData *)arg0;
- (id)labelForMallocBlock:(struct _VMURange)arg0;
- (id)labelForMemory:(void *)arg0 length:(unsigned int)arg1;
- (NSObject *)classInfoForObject:(unsigned long long)arg0;
- (id)classInfoForIsaPointer:(unsigned int)arg0;
- (NSObject *)classInfoForCFType:(struct __CFRuntimeBase *)arg0;

@end
