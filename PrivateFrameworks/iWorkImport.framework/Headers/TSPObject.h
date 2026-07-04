/* Runtime dump - TSPObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObject : NSObject
{
    long long _identifier;
    long long _modifyObjectToken;
    NSUUID * _UUID;
    TSPUnknownContent * _unknownContent;
    TSPComponent * _component;
    <TSPObjectDelegate> * _delegate;
    long long _unarchiverIdentifier;
}

@property (readonly, nonatomic) TSUUUIDPath * objectUUIDPath;
@property (readonly, nonatomic) char tsp_isInDocument;
@property (readonly, nonatomic) TSPObjectContext * context;
@property (readonly, nonatomic) NSString * tsp_description;
@property (readonly, nonatomic) NSString * packageLocator;
@property (readonly, nonatomic) char isComponentRoot;
@property (readonly, nonatomic) char storeOutsideObjectArchive;
@property (readonly, nonatomic) TSPObject * componentRootObject;
@property (readonly, nonatomic) char allowsImplicitComponentOwnership;
@property (readonly, nonatomic) char shouldDelayArchiving;
@property (readonly, nonatomic) unsigned int delayedArchivingPriority;
@property (copy, nonatomic) NSUUID * objectUUID;
@property (readonly, nonatomic) char isCommandObject;
@property (nonatomic) long long tsp_identifier;
@property (readonly, nonatomic) long long tsp_unarchiverIdentifier;
@property (readonly, nonatomic) TSPUnknownContent * tsp_unknownContent;
@property (nonatomic) long long tsp_modifyObjectToken;
@property (weak, nonatomic) TSPComponent * tsp_component;
@property (weak, nonatomic) <TSPObjectDelegate> * tsp_delegate;
@property (readonly, nonatomic) char needsArchiving;

+ (char)needsObjectUUID;
+ (TSPObject *)newObjectForUnarchiver:(TSPUnknownObjectUnarchiver *)arg0;
+ (char)tsp_isTransientObjectIdentifier:(long long)arg0;

- (void)deallocSOS;
- (TSPObject *)initBaseObjectWithContext:(TSPObjectContext *)arg0;
- (NSString *)packageLocator;
- (void)willModifyForUpgrade;
- (TSPObject *)initFromUnarchiver:(NSObject *)arg0;
- (NSUUID *)objectUUID;
- (void)willModify;
- (id)tsp_descriptionWithDepth:(unsigned int)arg0;
- (char)needsArchiving;
- (TSPObject *)initDocumentObjectWithContext:(TSPObjectContext *)arg0;
- (char)isComponentRoot;
- (char)storeOutsideObjectArchive;
- (void)willModifyToComponentRootObject:(NSObject *)arg0;
- (TSPObject *)componentRootObject;
- (char)allowsImplicitComponentOwnership;
- (char)shouldDelayArchiving;
- (unsigned int)delayedArchivingPriority;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg0;
- (char)isCommandObject;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)didFinishUnarchiving;
- (void)setObjectUUID:(NSUUID *)arg0;
- (NSString *)tsp_description;
- (long long)tsp_identifier;
- (void)setTsp_identifier:(long long)arg0;
- (long long)tsp_unarchiverIdentifier;
- (TSPUnknownContent *)tsp_unknownContent;
- (long long)tsp_modifyObjectToken;
- (void)setTsp_modifyObjectToken:(long long)arg0;
- (TSPComponent *)tsp_component;
- (void)setTsp_component:(TSPComponent *)arg0;
- (<TSPObjectDelegate> *)tsp_delegate;
- (void)setTsp_delegate:(<TSPObjectDelegate> *)arg0;
- (void)tsp_deepCopyWithContext:(TSPObjectContext *)arg0 options:(NSDictionary *)arg1 completion:(id /* block */)arg2;
- (NSString *)tsp_deepCopyWithContext:(TSPObjectContext *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
- (void)tsp_deepCopyWithOptions:(NSDictionary *)arg0 completion:(id /* block */)arg1;
- (NSDictionary *)tsp_deepCopyWithOptions:(NSDictionary *)arg0;
- (void)wasAddedToDocumentDuringUnarchive;
- (id)tsp_objectInfoWithDepth:(unsigned int)arg0;
- (NSData *)tsp_referencedData;
- (NSArray *)tsp_referencedObjects;
- (void)wasAddedToDocumentWithOptions:(unsigned int)arg0;
- (char)tsp_isInDocument;
- (TSUUUIDPath *)objectUUIDPath;
- (void)wasAddedToDocument;
- (void)wasAddedToDocumentDuringImport;
- (void)willBeRemovedFromDocument;
- (void)didInitFromSOS;
- (NSLocale *)objectLocale;
- (char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0;
- (char)documentIsRTL;
- (NSObject *)owningDocument;
- (void)dealloc;
- (TSPObject *)init;
- (TSPObjectContext *)context;
- (TSPObject *)initWithContext:(TSPObjectContext *)arg0;
- (TSPObject *)initCommon;
- (void).cxx_destruct;
- (NSString *)documentRoot;

@end
