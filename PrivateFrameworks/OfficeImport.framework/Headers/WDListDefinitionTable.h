/* Runtime dump - WDListDefinitionTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDListDefinitionTable : NSObject
{
    WDDocument * mDocument;
    NSMutableArray * mListDefinitions;
    NSMutableDictionary * mListDefinitionMapById;
    NSMutableDictionary * mListDefinitionMapByStyleId;
    WDListDefinition * mNullListDefinition;
}

- (void)dealloc;
- (WDListDefinitionTable *)initWithDocument:(NSObject *)arg0;
- (NSObject *)definitionWithDefinitionId:(long)arg0;
- (NSObject *)definitionWithStyleId:(NSString *)arg0;
- (NSArray *)definitions;
- (NSObject *)addDefinitionWithDefinitionId:(long)arg0 styleId:(NSString *)arg1;
- (void)setStyleId:(NSString *)arg0 forDefinitionWithDefinitionId:(long)arg1;
- (NSObject *)resolvedDefinitionWithDefinitionId:(long)arg0;

@end
