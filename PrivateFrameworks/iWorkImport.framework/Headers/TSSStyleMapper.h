/* Runtime dump - TSSStyleMapper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSStyleMapper : NSObject <TSKStyleMapper>
{
    TSSStylesheet * _targetStylesheet;
    TSURetainedPointerKeyDictionary * _styleMap;
    NSMutableArray * _mappingContext;
    NSMutableSet * _createdStyles;
    char _forceMatchStyle;
    char _clientsMustRemap;
}

@property (readonly, nonatomic) TSSStylesheet * targetStylesheet;
@property (readonly, nonatomic) NSSet * createdStyles;
@property (nonatomic) char forceMatchStyle;
@property (nonatomic) char clientsMustRemap;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSSStylesheet *)targetStylesheet;
- (NSObject *)targetParentByIdentifierExactMatchForStyle:(NSObject *)arg0;
- (NSObject *)targetParentByNameMatchForStyle:(NSObject *)arg0;
- (NSObject *)targetParentByContentTagMatchForStyle:(NSObject *)arg0;
- (NSObject *)targetParentForStyle:(NSObject *)arg0;
- (NSObject *)stylesheetForNewRootStyleFromStyle:(NSObject *)arg0;
- (char)shouldMapParentOfStyle:(NSObject *)arg0;
- (TSSStyleMapper *)initWithTargetStylesheet:(TSSStylesheet *)arg0;
- (NSObject *)mappedStyleForStyle:(NSObject *)arg0;
- (NSObject *)targetParentByIdentifierPackageDescriptorFallbackMatchForStyle:(NSObject *)arg0;
- (char)clientsMustRemap;
- (NSObject *)_mappedStyleForStyle:(NSObject *)arg0 depth:(unsigned int)arg1;
- (NSObject *)createRootStyleForStyle:(NSObject *)arg0 withPropertyMap:(NSObject *)arg1;
- (void)pushMappingContext:(NSObject *)arg0;
- (void)popMappingContext:(NSObject *)arg0;
- (char)forceMatchStyle;
- (void)setForceMatchStyle:(char)arg0;
- (NSSet *)createdStyles;
- (void)setClientsMustRemap:(char)arg0;
- (void)dealloc;

@end
