//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 14 2013 08:30:39).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BrowserWindowController, DSShadowOverlay, DictionaryRecordRepository, DictionaryWebView, NSArray, NSArrayController, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSScrollView, NSString, NSTimer, WebWrapScrollView;

@interface DictionaryController : NSObject
{
    DictionaryWebView *_descriptionWebView;
    NSScrollView *_foundIndexScrollView;
    NSArrayController *_foundArrayController;
    id _delegate;
    WebWrapScrollView *_webWrapScrollView;
    BrowserWindowController *_windowController;
    NSArray *_dictionaryList;
    NSMutableArray *_selectedDictionaries;
    NSMutableDictionary *_dictionaryProperties;
    DictionaryRecordRepository *_foundRecords;
    NSArray *_foundHeadwordArray;
    NSMutableDictionary *_headwordToAnnotationInfo;
    long long _findMethod;
    long long _transactionID;
    long long _lastProcessedTransactionID;
    NSOperationQueue *_searchQueue;
    NSString *_lastSearchText;
    NSString *_lastSearchFieldText;
    NSString *_lastSelectedIndexText;
    long long _lastSelectedIndex;
    BOOL _lastDisplayContentsTopInAllView;
    BOOL _lastDisplayContentsSearchFinished;
    long long _lastDisplayContentsDataCount;
    BOOL _lastSearchByUserTyping;
    BOOL _lastSearchByExternalTrigger;
    NSMutableDictionary *_loadingFrameNames;
    double _restoringScrollPosFromSnapshot;
    BOOL _useParentalControl;
    NSMutableDictionary *_lastXMLDocumentsForDisplay;
    NSMutableArray *_lastAnchorNamesForFrame;
    NSMutableDictionary *_lastLoadedHeadwordForFrame;
    NSMutableDictionary *_delayedSubFrameProcessors;
    BOOL _useMouseoverLink;
    NSString *_lastPointedTerm;
    NSString *_lastClickedTerm;
    id _lastDOMRange;
    unsigned long long _lastClickedModifiers;
    NSString *_tempMouseOverDictionaryID;
    NSString *_lastLinkSourceDictionaryID;
    BOOL _indexListIsHidden;
    BOOL _indexInvisibleMode;
    double _indexFontSize;
    double _indexDefaultRowHeight;
    double _indexDefaultFontSize;
    struct CGSize _indexDefaultSpacing;
    double _lastIndexWidth;
    NSTimer *_idleTimerForSnapshot;
    BOOL _needsToTakeSnapshot;
    BOOL _willNeedToTakeSnapshot;
    BOOL _alreadyTookSnapshot;
    BOOL _lastEventIsMouseDownUp;
    DSShadowOverlay *_indexTopShadow;
    DSShadowOverlay *_indexBottomShadow;
    NSMutableArray *_dictionariesWithFrontMatter;
    BOOL _changingSelectionByCode;
    BOOL _processedKeyEvent;
    BOOL _keyEventCheckMode;
    SEL _keyEventCheckResult;
    BOOL _rewindingHistory;
    BOOL _loadingWebView;
    BOOL _resumingCache;
    BOOL _mainPageLoaded;
}

+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
@property(readonly) NSMutableDictionary *headwordToAnnotationInfo; // @synthesize headwordToAnnotationInfo=_headwordToAnnotationInfo;
@property(readonly) BOOL indexListIsHidden; // @synthesize indexListIsHidden=_indexListIsHidden;
@property long long findMethod; // @synthesize findMethod=_findMethod;
@property id delegate; // @synthesize delegate=_delegate;
@property(retain) NSArray *dictionaryList; // @synthesize dictionaryList=_dictionaryList;
- (void)_removeProperty:(id)arg1 forDictionary:(id)arg2;
- (void)_setProperty:(id)arg1 forDictionary:(id)arg2 withKey:(id)arg3;
- (id)_propertyForDictionary:(id)arg1 withKey:(id)arg2;
- (void)_clearDelayedSearchStatus:(id)arg1;
- (void)_setDelayedSearchStatus:(id)arg1;
- (BOOL)_hasDealyedFindCompletedForDictionary:(id)arg1;
- (BOOL)_hasAsyncSearchCompletedLocalOnly:(BOOL)arg1;
- (void)_scrollRowToVisible:(long long)arg1 direction:(long long)arg2;
- (id)_indexSplitView;
- (void)_stopLoadingWebView;
- (void)_startLoadingWebView;
- (void)_stopProgressAnimation;
- (void)_startProgressAnimation;
- (void)_changeWebViewAndIndexTextSize:(id)arg1;
- (id)_searchFieldTextForSelectedIndexTitle:(id)arg1;
- (id)_searchTextForSelectedIndexTitle:(id)arg1;
- (void)_openLinkInNewWindow:(id)arg1;
- (void)_lookupInNewWindow:(id)arg1;
- (void)_setFoundHeadwordArray:(id)arg1;
- (void)_clearFoundRecordList;
- (void)_clearSearchResult;
- (void)_prepareForNewSearch:(id)arg1 displayString:(id)arg2 clearList:(BOOL)arg3;
- (void)_leaveCurrentDisplay;
- (id)_focusedDictionaryID;
- (id)_focusedDictionary;
- (void)_setWindowDictionaryScopeBar:(long long)arg1;
- (void)_showSplashPage;
- (void)_clearContentsOfFrame:(id)arg1 withMessage:(BOOL)arg2;
- (void)_setDividerState:(BOOL)arg1 forDictionary:(id)arg2;
- (void)_displaySimpleMessage:(id)arg1 inFrame:(id)arg2;
- (void)_formatFrame:(id)arg1 withScriptObject:(id)arg2 loadFinished:(BOOL)arg3;
- (void)_delayedSubFrameFormatting:(id)arg1;
- (id)_dataForIndexWord:(id)arg1 withKeyString:(id)arg2 inRecords:(id)arg3 inDictionary:(id)arg4 foundRecords:(id *)arg5;
- (void)_rearrangeAccesibilityContentsLinks;
- (void)_finishLoadingAllFrameContents;
- (void)_loadContentsForDictionary:(id)arg1 inFrame:(id)arg2;
- (BOOL)_updateLoadingData:(id)arg1 forRecords:(id)arg2;
- (id)_generateMainFrameString;
- (void)_loadMainFramePage;
- (id)_frameForDictionary:(id)arg1;
- (void)_displayContents:(id)arg1 forRecords:(id)arg2 selection:(id)arg3 isLinked:(BOOL)arg4 fromSnapshot:(BOOL)arg5 withIndex:(BOOL)arg6;
- (void)_delayedDisplayContentsRequest:(id)arg1;
- (void)_displayLinkForKey:(id)arg1 headword:(id)arg2 dictionaryID:(id)arg3 anchor:(id)arg4 flag:(unsigned int)arg5 returnable:(BOOL)arg6;
- (void)_displayIndexSearchSelection:(BOOL)arg1;
- (void)scriptDocument:(id)arg1 printLog:(id)arg2;
- (void)scriptDocument:(id)arg1 clickedDivider:(id)arg2 showIt:(BOOL)arg3;
- (void)scriptDocument:(id)arg1 scrollToPos:(float)arg2 animate:(BOOL)arg3;
- (void)scriptDocument:(id)arg1 scrollToPos:(float)arg2 inPageJump:(BOOL)arg3;
- (void)scriptDocumentLoaded:(id)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)_tableViewDoubleClicked:(id)arg1;
- (BOOL)lockingContentsForPrint;
- (void)printContents;
- (id)indexTableView;
- (void)changeTextSize:(BOOL)arg1;
- (void)revealedWithContents:(BOOL)arg1 withTextSizeMultiplier:(double)arg2;
- (BOOL)isIndexVisible;
- (void)showHideIndexList:(BOOL)arg1;
- (void)setIndexSelection:(long long)arg1 absolute:(BOOL)arg2;
- (void)confirmIndexSelection;
- (id)dictionariesWithFrontMatter;
- (void)showFrontMatterOfDictionary:(id)arg1;
- (void)updateHeadwordArrayStateAndWindowTitle;
- (id)selectedDictionaryLabel;
- (long long)selectedDictionaryIndex;
- (void)setSelectedDictionaryIndex:(long long)arg1 byUser:(BOOL)arg2;
- (BOOL)_findWebViewOnDirection:(BOOL)arg1 withKeyWord:(id)arg2;
- (BOOL)_findIndexListOnDirection:(BOOL)arg1 withKeyWord:(id)arg2;
- (id)selectedStringForFindPanel;
- (BOOL)hasSelection;
- (BOOL)jumpToSelectionOnIndexList:(BOOL)arg1;
- (BOOL)findOnDirection:(BOOL)arg1 withKeyWord:(id)arg2;
- (void)_addSpellCorrectedMarkToSnapshot:(id)arg1;
- (id)_snapshotOfCurrentIndexWithScrollPos:(BOOL)arg1;
- (void)_stopSnapshotIdleTimer;
- (void)_resetSnapshotIdleTimer;
- (void)_snapshotIdleTimerFired;
- (void)_takeSnapshotIfNeeded;
- (void)_takeSnapshotForcedByLink:(BOOL)arg1;
- (id)historySwipeView;
- (id)currentSnapshot;
- (void)updateIndexListFromSnapshot:(id)arg1;
- (void)dictHandlerForStringLongest:(id)arg1 inDictionary:(id)arg2;
- (void)_internalURLHandler:(id)arg1 withLabel:(id)arg2 fromReferer:(id)arg3 inDictionary:(id)arg4;
- (void)dictSchemeHandlerForURL:(id)arg1 withLabel:(id)arg2 inDictionary:(id)arg3;
- (void)_updateContentsForDictionarySwitch;
- (void)_updateContentsForDictionary:(id)arg1 takeSnapshot:(BOOL)arg2 reflectSearchField:(BOOL)arg3;
- (void)_updateIndexListWithAppendingRecords:(BOOL)arg1 withSelection:(id)arg2;
- (void)asyncDictionarySearchDidFinished:(id)arg1;
- (void)_appendFoundRecords:(id)arg1 isGuessed:(BOOL)arg2 fromDictionary:(id)arg3;
- (void)_asyncDictionarySearchDidFoundInMainThread:(id)arg1;
- (void)asyncDictionarySearchDidFound:(id)arg1;
- (void)_finalizeAsynchronousSearches;
- (void)_startAsynchronousSearches;
- (void)_cancelAllSearchesWithNewTransaction:(BOOL)arg1;
- (void)dictionarySearchFieldConfirmed:(id)arg1;
- (void)dictionarySearchFieldStringDidChanged:(id)arg1;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (BOOL)_processKeyEvent:(id)arg1;
- (void)_jumpToClickedTerm;
- (BOOL)processedSpecialEvent:(id)arg1;
- (id)retrieveProperty;
- (void)dealloc;
- (void)prepareFinalize;
- (id)_convertPropertyIfNeeded:(id)arg1;
- (id)_activeDictionaryListWithSavedList:(id)arg1;
- (id)initWithProperty:(id)arg1;
- (id)initWithDictionaryList:(id)arg1;
- (id)_privateInit;

@end

