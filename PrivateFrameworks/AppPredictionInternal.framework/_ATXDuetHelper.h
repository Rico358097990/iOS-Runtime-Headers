/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXDuetHelper : NSObject {
    _PASLock * _deletionHandlerLock;
    _PASLock * _rootOfAppDataLock;
    NSDictionary * magicalMomentsPlistParameters;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_computeRootOfAppDataWithLockWitness:(id)arg1;
- (void)_enumerateBatchesInDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5 block:(id /* block */)arg6;
- (id)_getIntentEventForSource:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 bundleIdFilter:(id)arg5 allowMissingTitles:(bool)arg6 limit:(unsigned long long)arg7;
- (id)_getTombstoneUUIDsBetweenStartDate:(id)arg1 endDate:(id)arg2 predicate:(id)arg3;
- (void)_handleTombstoneCreationWithNotification:(id)arg1;
- (id)_queryDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5;
- (id)_queryDuetStreamUnbatched:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5;
- (void)dealloc;
- (void)deregisterDeletionHandlerWithToken:(unsigned long long)arg1;
- (id)getActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)getActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3;
- (id)getAppLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)getAppLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)getDocFreqFor:(id)arg1 contentKey:(id)arg2;
- (id)getEligibleActivityDeletionsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)getFirstActivityEventBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3;
- (id)getFirstIntentEventBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 forSource:(long long)arg4;
- (id)getIntentDeletionsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)getIntentEventForUUID:(id)arg1 forSource:(long long)arg2;
- (id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 forSource:(long long)arg4 allowMissingTitles:(bool)arg5;
- (id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 forSource:(long long)arg3;
- (id)getMostRecentINPlayMediaIntentEvent;
- (id)getRootOfAppSignalsFor:(id)arg1 contentKey:(id)arg2;
- (id)getScreenTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)getSortedActivityAndIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 comparator:(id /* block */)arg3;
- (id)getSurfExtensionLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)init;
- (double)maxAgeOfPreviousDonationToConsider;
- (unsigned long long)registerDeletionHandler:(id /* block */)arg1 queue:(id)arg2;

@end