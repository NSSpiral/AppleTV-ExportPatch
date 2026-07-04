/* Runtime dump - AXElementGroup
 * Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXElementGroup : NSArray <AXGroupable>
{
    NSArray * _elementStore;
    char _rootGroup;
    <AXElementGroupGenerator> * _generator;
    int _groupTraits;
    NSHashTable * _groupObservers;
    AXElementGroup * _parentGroup;
    NSString * _label;
}

@property (nonatomic) AXElementGroup * parentGroup;
@property (nonatomic) char rootGroup;
@property (readonly, nonatomic) NSString * label;
@property (nonatomic) int groupTraits;
@property (readonly, nonatomic) char canBeGroupedWithOtherGroupables;
@property (readonly, nonatomic) char canBeReplacedByChildren;
@property (readonly, nonatomic) char allowsChangingExistingGroupingOfContents;
@property (readonly, nonatomic) char shouldBeUngrouped;
@property (readonly, nonatomic) char allowsVisualGroupingOfChildren;
@property (readonly, nonatomic) unsigned int numberOfElements;
@property (nonatomic) <AXElementGroupGenerator> * generator;
@property (retain, nonatomic) NSHashTable * groupObservers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) struct CGRect frame;

+ (AXElementGroup *)groupWithElements:(id)arg0 label:(NSString *)arg1;
+ (AXElementGroup *)groupWithElements:(id)arg0;
+ (AXElementGroup *)groupWithGenerator:(<AXElementGroupGenerator> *)arg0;

- (void)setParentGroup:(AXElementGroup *)arg0;
- (AXElementGroup *)parentGroup;
- (void)dealloc;
- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (struct CGRect)frame;
- (NSString *)description;
- (NSString *)debugDescription;
- (AXElementGroup *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)label;
- (NSObject *)lastChild;
- (NSObject *)firstChild;
- (AXElementGroup *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (char)isGroup;
- (char)allowsChangingExistingGroupingOfContents;
- (char)canBeReplacedByChildren;
- (char)shouldBeUngrouped;
- (int)groupTraits;
- (void)setGroupTraits:(int)arg0;
- (char)isKeyboardContainer;
- (char)allowsVisualGroupingOfChildren;
- (char)canBeGroupedWithOtherGroupables;
- (AXElementGroup *)highestAncestorGroup;
- (AXElementGroup *)keyboardContainer;
- (char)isKeyboardRow;
- (id)firstChildPassingTest:(id /* block */)arg0;
- (id)descendantsPassingTest:(id /* block */)arg0;
- (id)firstDescendantPassingTest:(id /* block */)arg0;
- (NSObject *)nextSiblingOfChild:(NSObject *)arg0 didWrap:(char *)arg1;
- (NSObject *)previousSiblingOfChild:(NSObject *)arg0 didWrap:(char *)arg1;
- (id)groupByReplacingGroupable:(id)arg0 withGroupable:(id)arg1;
- (void)setRootGroup:(char)arg0;
- (AXElementGroup *)initWithElements:(id)arg0 label:(NSString *)arg1;
- (AXElementGroup *)initWithGenerator:(<AXElementGroupGenerator> *)arg0;
- (void)_commonInitWithElements:(id)arg0 label:(NSString *)arg1 generator:(<AXElementGroupGenerator> *)arg2;
- (void)setGroupObservers:(NSHashTable *)arg0;
- (void)unregisterAllGroupObservers;
- (void)_transferStateToGroup:(NSObject *)arg0;
- (void)_notifyGroupObserversWillTransferStateToGroup:(NSObject *)arg0;
- (void)_notifyGroupObserversDidTransferStateToGroup:(NSObject *)arg0;
- (void)_generateGroupsIfNeeded;
- (NSObject *)_siblingOfChild:(NSObject *)arg0 inDirection:(char)arg1 didWrap:(char *)arg2;
- (id)childrenPassingTest:(id /* block */)arg0;
- (id)ancestorPassingTest:(id /* block */)arg0;
- (unsigned int)numberOfElements;
- (NSHashTable *)groupObservers;
- (NSString *)debugFullDescription;
- (NSArray *)_debugDescriptionForTraits;
- (id)_debugFullDescriptionWithIndent:(id)arg0;
- (id)groupByPrependingGroupable:(id)arg0;
- (id)groupByAppendingGroupable:(id)arg0;
- (id)groupByRemovingGroupable:(id)arg0;
- (NSObject *)firstChildMatchingItem:(NSObject *)arg0;
- (NSObject *)firstDescendantMatchingItem:(NSObject *)arg0;
- (id)firstLeafDescendant;
- (NSArray *)keyboardContainerRows;
- (id)keyboardRow;
- (void)registerGroupObserver:(NSObject *)arg0;
- (void)unregisterGroupObserver:(NSObject *)arg0;
- (NSString *)_debugBriefDescription;
- (char)isRootGroup;
- (void)setGenerator:(<AXElementGroupGenerator> *)arg0;
- (<AXElementGroupGenerator> *)generator;
- (NSLocale *)descriptionWithLocale:(NSObject *)arg0;

@end
