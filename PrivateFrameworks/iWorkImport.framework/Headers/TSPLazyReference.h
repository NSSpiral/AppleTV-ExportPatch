/* Runtime dump - TSPLazyReference
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPLazyReference : NSObject <NSCopying>
{
    TSPObject * _strongObject;
    TSPObject * _weakObject;
    struct ? _flags;
    <TSPLazyReferenceDelegate> * _delegate;
    TSPComponent * _component;
    long long _identifier;
}

@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) id objectIfLoaded;
@property (weak, nonatomic) <TSPLazyReferenceDelegate> * delegate;
@property (readonly, nonatomic) long long identifier;
@property (readonly, nonatomic) NSUUID * objectUUID;
@property (weak, nonatomic) TSPComponent * component;
@property (readonly, nonatomic) TSPObject * weakObject;
@property (retain, nonatomic) TSPObject * strongObject;
@property (readonly, nonatomic) char isWeak;
@property (nonatomic) char isExternal;

+ (NSObject *)referenceForObject:(NSObject *)arg0;
+ (NSObject *)weakReferenceForObject:(NSObject *)arg0;

- (NSUUID *)objectUUID;
- (TSPObject *)weakObject;
- (id)objectIfLoaded;
- (TSPLazyReference *)initWithDelegate:(<TSPLazyReferenceDelegate> *)arg0 identifier:(long long)arg1 isWeak:(char)arg2 allowUnknownObject:(char)arg3;
- (void)setStrongObject:(TSPObject *)arg0;
- (TSPLazyReference *)initWeakReferenceWithObject:(NSObject *)arg0;
- (TSPLazyReference *)initWithObject:(NSObject *)arg0 isWeak:(char)arg1;
- (char)isEqualToLazyReference:(NSObject *)arg0;
- (void)resetToIdentifier:(long long)arg0;
- (char)referencesObject:(NSObject *)arg0;
- (void)addLoadObserver:(NSObject *)arg0 action:(SEL)arg1;
- (TSPObject *)strongObject;
- (char)discardStrongObjectIfPossible;
- (void)resetIdentifierFromCopy:(char)arg0;
- (char)isWeak;
- (void)setDelegate:(<TSPLazyReferenceDelegate> *)arg0;
- (TSPLazyReference *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)debugDescription;
- (<TSPLazyReferenceDelegate> *)delegate;
- (long long)identifier;
- (TSPLazyReference *)copyWithZone:(struct _NSZone *)arg0;
- (NSObject *)object;
- (void).cxx_construct;
- (char)isExternal;
- (void).cxx_destruct;
- (TSPLazyReference *)initWithObject:(NSObject *)arg0;
- (void)setComponent:(TSPComponent *)arg0;
- (TSPComponent *)component;
- (void)setIsExternal:(char)arg0;

@end
