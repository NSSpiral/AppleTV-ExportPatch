/* Runtime dump - NRDevice
 * Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRDevice : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> * _nrQueue;
    NSMutableDictionary * _properties;
    NSMutableDictionary * _observers;
    NSPointerArray * _promiscuousObservers;
    NSMutableDictionary * _changeBlocks;
    NSMutableArray * _promiscuousChangeBlocks;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * nrQueue;
@property (retain, nonatomic) NSMutableDictionary * properties;
@property (retain, nonatomic) NSMutableDictionary * observers;
@property (retain, nonatomic) NSPointerArray * promiscuousObservers;
@property (retain, nonatomic) NSMutableDictionary * changeBlocks;
@property (retain, nonatomic) NSMutableArray * promiscuousChangeBlocks;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (NRDevice *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NRDevice *)init;
- (NSString *)description;
- (NRDevice *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)_setValue:(NSValue *)arg0 forProperty:(NSString *)arg1;
- (void).cxx_destruct;
- (void *)valueForProperty:(NSString *)arg0;
- (void)setProperties:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)properties;
- (void)setObservers:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)observers;
- (char)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1;
- (NSString *)queueDescription;
- (void)queueAddPropertyObserver:(NSObject *)arg0 forPropertyChanges:(id)arg1;
- (void)queueRemovePropertyObserver:(NSObject *)arg0 forPropertyChanges:(id)arg1;
- (NSObject *)queueValueForProperty:(NSString *)arg0;
- (char)_queueSetValue:(id)arg0 forProperty:(NSString *)arg1;
- (void)_queueFirePropertyObserversForProperty:(NSString *)arg0 fromValue:(NSValue *)arg1;
- (NSMutableDictionary *)changeBlocks;
- (void)queueMergeWithDevice:(NSObject *)arg0;
- (void)queueRegisterForPropertyChanges:(id)arg0 withBlock:(id /* block */)arg1;
- (void)queueUnregisterForPropertyChanges:(id)arg0 withBlock:(id /* block */)arg1;
- (void)addPropertyObserver:(NSObject *)arg0 forPropertyChanges:(id)arg1;
- (void)removePropertyObserver:(NSObject *)arg0 forPropertyChanges:(id)arg1;
- (void)_firePropertyObserversForProperty:(NSString *)arg0 fromValue:(NSValue *)arg1;
- (NRDevice *)initWithDevice:(NSObject *)arg0 queue:(NSObject *)arg1 withSecureProperties:(char)arg2;
- (void)mergeWithDevice:(NSObject *)arg0;
- (NSArray *)propertyNames;
- (void)registerForPropertyChanges:(id)arg0 withBlock:(id /* block */)arg1;
- (void)unregisterForPropertyChanges:(id)arg0 withBlock:(id /* block */)arg1;
- (NSObject<OS_dispatch_queue> *)nrQueue;
- (void)setNrQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSPointerArray *)promiscuousObservers;
- (void)setPromiscuousObservers:(NSPointerArray *)arg0;
- (void)setChangeBlocks:(NSMutableDictionary *)arg0;
- (NSMutableArray *)promiscuousChangeBlocks;
- (void)setPromiscuousChangeBlocks:(NSMutableArray *)arg0;

@end
