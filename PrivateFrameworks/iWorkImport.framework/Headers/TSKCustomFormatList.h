/* Runtime dump - TSKCustomFormatList
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCustomFormatList : TSPObject <NSCopying>
{
    NSMutableDictionary * mFormatsByKeyDictionary;
    TSUNoCopyDictionary * mKeysByFormatDictionary;
    TSUNoCopyDictionary * mKeysByFormatWithNameStemMatching;
    TSUSparseArray * mKeysByIndex;
    TSUNoCopyDictionary * mIndexesByKey;
    NSMutableSet * mNamesList;
    char mUpgrading;
    char mUpgradingDone;
    char mImporting;
    char mImportingDone;
}

@property (nonatomic) char importing;
@property (nonatomic) char upgrading;

+ (void)archiveKeys:(NSArray *)arg0 message:(struct RepeatedPtrField<TSP::UUID> *)arg1;
+ (NSArray *)unarchiveKeys:(struct RepeatedPtrField<TSP::UUID> *)arg0;

- (TSKCustomFormatList *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)setImporting:(char)arg0;
- (void)setUpgrading:(char)arg0;
- (NSString *)customFormatForKey:(NSString *)arg0;
- (NSString *)addCustomFormat:(NSString *)arg0 oldKey:(NSString *)arg1 fuzzyNameMatching:(char)arg2;
- (void)upgradeLegacyCustomTSUFormatStruct:(struct ? *)arg0;
- (char)importing;
- (void)p_setCustomFormat:(NSString *)arg0 key:(NSString *)arg1 legacyKey:(unsigned int)arg2;
- (char)upgrading;
- (id)p_keyForFormatUsingNameStem:(id)arg0;
- (NSString *)p_newUniqueNameFromName:(NSString *)arg0;
- (void)p_setCustomFormat:(NSString *)arg0 key:(NSString *)arg1;
- (void)removeCustomFormatForKey:(NSString *)arg0;
- (NSString *)keyForCustomFormat:(NSString *)arg0;
- (id)addedKeysRelativeTo:(id)arg0;
- (char)hasFormatNamed:(id)arg0;
- (unsigned int)inspectorIndexForKey:(NSString *)arg0;
- (NSObject *)keyForInspectorIndex:(unsigned int)arg0;
- (void)removeCustomFormatsForKeys:(NSArray *)arg0;
- (void)updateCustomFormat:(NSString *)arg0 oldKey:(NSString *)arg1;
- (NSString *)addImportedCustomFormat:(NSString *)arg0;
- (void)addCustomFormatForUpgrade:(id)arg0 legacyKey:(unsigned int)arg1;
- (NSArray *)allKeys;
- (void)dealloc;
- (unsigned int)count;
- (TSKCustomFormatList *)init;
- (TSKCustomFormatList *)copyWithZone:(struct _NSZone *)arg0;
- (TSKCustomFormatList *)initWithContext:(TSPObjectContext *)arg0;

@end
