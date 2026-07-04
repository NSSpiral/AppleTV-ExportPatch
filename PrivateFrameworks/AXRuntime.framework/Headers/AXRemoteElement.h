/* Runtime dump - AXRemoteElement
 * Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXRemoteElement : NSObject
{
    NSString * _uuid;
    int _remotePid;
    unsigned int _contextId;
    char _onClientSide;
    <AXRemoteElementChildrenDelegate> * _remoteChildrenDelegate;
    NSMutableSet * _allChildren;
    char _deniesDirectAppConnection;
    unsigned int _machPort;
    id _accessibilityContainer;
}

@property (retain, nonatomic) NSString * uuid;
@property (readonly, nonatomic) unsigned long long uuidHash;
@property (nonatomic) int remotePid;
@property (nonatomic) unsigned int contextId;
@property (nonatomic) unsigned int machPort;
@property (nonatomic) char onClientSide;
@property (nonatomic) <AXRemoteElementChildrenDelegate> * remoteChildrenDelegate;
@property (nonatomic) id accessibilityContainer;
@property (nonatomic) char deniesDirectAppConnection;

+ (void)initialize;
+ (AXRemoteElement *)remoteElementForBlock:(id /* block */)arg0;
+ (NSObject *)remoteElementForContextId:(unsigned int)arg0;
+ (char)registerRemoteElement:(NSObject *)arg0;

- (unsigned int)machPort;
- (void)dealloc;
- (NSString *)description;
- (unsigned int)contextId;
- (struct CGRect)accessibilityFrame;
- (NSObject *)accessibilityContainer;
- (void)setAccessibilityContainer:(NSObject *)arg0;
- (void)unregister;
- (NSString *)uuid;
- (void)setContextId:(unsigned int)arg0;
- (char)deniesDirectAppConnection;
- (void)setRemotePid:(int)arg0;
- (NSObject *)_remoteElementWithAttribute:(int)arg0;
- (<AXRemoteElementChildrenDelegate> *)remoteChildrenDelegate;
- (AXRemoteElement *)initWithUUID:(NSString *)arg0 andRemotePid:(int)arg1 andContextId:(unsigned int)arg2;
- (NSObject *)_accessibilityFirstElement;
- (NSObject *)_accessibilityLastElement;
- (void)setOnClientSide:(char)arg0;
- (void)setRemoteChildrenDelegate:(<AXRemoteElementChildrenDelegate> *)arg0;
- (void)setDeniesDirectAppConnection:(char)arg0;
- (void)setMachPort:(unsigned int)arg0;
- (void)setUuid:(NSString *)arg0;
- (char)onClientSide;
- (id)accessibilityContainerElements;
- (NSArray *)_accessibilityTextOperations;
- (NSObject *)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilitySortedElementsWithin;
- (NSObject *)_accessibilityResponderElement;
- (void)_accessibilityIncreaseSelection:(id)arg0;
- (void)platformCleanup;
- (unsigned long long)uuidHash;
- (int)remotePid;

@end
