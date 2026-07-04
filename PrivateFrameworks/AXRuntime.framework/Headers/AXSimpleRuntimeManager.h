/* Runtime dump - AXSimpleRuntimeManager
 * Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXSimpleRuntimeManager : NSObject
{
    char _systemWideServer;
    id _parameterizedAttributeCallback;
    id _attributeCallback;
    id _setAttributeCallback;
    id _performActionCallback;
    id _clientObserverCallback;
    id _hitTestCallback;
    id _applicationElementCallback;
    id _outgoingValuePreprocessor;
}

@property (nonatomic) char systemWideServer;
@property (copy, nonatomic) id parameterizedAttributeCallback;
@property (copy, nonatomic) id attributeCallback;
@property (copy, nonatomic) id setAttributeCallback;
@property (copy, nonatomic) id performActionCallback;
@property (copy, nonatomic) id clientObserverCallback;
@property (copy, nonatomic) id hitTestCallback;
@property (copy, nonatomic) id applicationElementCallback;
@property (copy, nonatomic) id outgoingValuePreprocessor;

+ (AXSimpleRuntimeManager *)sharedManager;

- (void)start;
- (char)systemWideServer;
- (void)setSystemWideServer:(char)arg0;
- (id /* block */)parameterizedAttributeCallback;
- (void)setParameterizedAttributeCallback:(id /* block */)arg0;
- (id /* block */)attributeCallback;
- (void)setAttributeCallback:(id /* block */)arg0;
- (id /* block */)setAttributeCallback;
- (void)setSetAttributeCallback:(id /* block */)arg0;
- (id /* block */)performActionCallback;
- (void)setPerformActionCallback:(id /* block */)arg0;
- (id /* block */)clientObserverCallback;
- (void)setClientObserverCallback:(id /* block */)arg0;
- (id /* block */)hitTestCallback;
- (void)setHitTestCallback:(id /* block */)arg0;
- (id /* block */)applicationElementCallback;
- (void)setApplicationElementCallback:(id /* block */)arg0;
- (id)outgoingValuePreprocessor;
- (void)setOutgoingValuePreprocessor:(id)arg0;

@end
